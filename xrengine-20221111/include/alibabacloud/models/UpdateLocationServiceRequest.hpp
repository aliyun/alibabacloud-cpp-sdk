// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOCATIONSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOCATIONSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class UpdateLocationServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLocationServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(SvcName, svcName_);
      DARABONBA_PTR_TO_JSON(SvcState, svcState_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLocationServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(SvcName, svcName_);
      DARABONBA_PTR_FROM_JSON(SvcState, svcState_);
    };
    UpdateLocationServiceRequest() = default ;
    UpdateLocationServiceRequest(const UpdateLocationServiceRequest &) = default ;
    UpdateLocationServiceRequest(UpdateLocationServiceRequest &&) = default ;
    UpdateLocationServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLocationServiceRequest() = default ;
    UpdateLocationServiceRequest& operator=(const UpdateLocationServiceRequest &) = default ;
    UpdateLocationServiceRequest& operator=(UpdateLocationServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->jwtToken_ == nullptr && this->note_ == nullptr && this->qps_ == nullptr && this->svcName_ == nullptr && this->svcState_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateLocationServiceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline UpdateLocationServiceRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline UpdateLocationServiceRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
    inline UpdateLocationServiceRequest& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // svcName Field Functions 
    bool hasSvcName() const { return this->svcName_ != nullptr;};
    void deleteSvcName() { this->svcName_ = nullptr;};
    inline string getSvcName() const { DARABONBA_PTR_GET_DEFAULT(svcName_, "") };
    inline UpdateLocationServiceRequest& setSvcName(string svcName) { DARABONBA_PTR_SET_VALUE(svcName_, svcName) };


    // svcState Field Functions 
    bool hasSvcState() const { return this->svcState_ != nullptr;};
    void deleteSvcState() { this->svcState_ = nullptr;};
    inline string getSvcState() const { DARABONBA_PTR_GET_DEFAULT(svcState_, "") };
    inline UpdateLocationServiceRequest& setSvcState(string svcState) { DARABONBA_PTR_SET_VALUE(svcState_, svcState) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> note_ {};
    shared_ptr<int32_t> qps_ {};
    shared_ptr<string> svcName_ {};
    shared_ptr<string> svcState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif

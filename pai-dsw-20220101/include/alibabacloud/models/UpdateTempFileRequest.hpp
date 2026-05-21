// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateTempFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTempFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTempFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateTempFileRequest() = default ;
    UpdateTempFileRequest(const UpdateTempFileRequest &) = default ;
    UpdateTempFileRequest(UpdateTempFileRequest &&) = default ;
    UpdateTempFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTempFileRequest() = default ;
    UpdateTempFileRequest& operator=(const UpdateTempFileRequest &) = default ;
    UpdateTempFileRequest& operator=(UpdateTempFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtExpiredTime_ == nullptr
        && this->status_ == nullptr; };
    // gmtExpiredTime Field Functions 
    bool hasGmtExpiredTime() const { return this->gmtExpiredTime_ != nullptr;};
    void deleteGmtExpiredTime() { this->gmtExpiredTime_ = nullptr;};
    inline string getGmtExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(gmtExpiredTime_, "") };
    inline UpdateTempFileRequest& setGmtExpiredTime(string gmtExpiredTime) { DARABONBA_PTR_SET_VALUE(gmtExpiredTime_, gmtExpiredTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateTempFileRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> gmtExpiredTime_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif

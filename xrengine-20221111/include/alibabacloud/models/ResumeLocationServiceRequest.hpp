// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMELOCATIONSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMELOCATIONSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ResumeLocationServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeLocationServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeLocationServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
    };
    ResumeLocationServiceRequest() = default ;
    ResumeLocationServiceRequest(const ResumeLocationServiceRequest &) = default ;
    ResumeLocationServiceRequest(ResumeLocationServiceRequest &&) = default ;
    ResumeLocationServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeLocationServiceRequest() = default ;
    ResumeLocationServiceRequest& operator=(const ResumeLocationServiceRequest &) = default ;
    ResumeLocationServiceRequest& operator=(ResumeLocationServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->jwtToken_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ResumeLocationServiceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline ResumeLocationServiceRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> jwtToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif

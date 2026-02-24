// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetDigitalEmployeeSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetDigitalEmployeeSkillRequest() = default ;
    GetDigitalEmployeeSkillRequest(const GetDigitalEmployeeSkillRequest &) = default ;
    GetDigitalEmployeeSkillRequest(GetDigitalEmployeeSkillRequest &&) = default ;
    GetDigitalEmployeeSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeSkillRequest() = default ;
    GetDigitalEmployeeSkillRequest& operator=(const GetDigitalEmployeeSkillRequest &) = default ;
    GetDigitalEmployeeSkillRequest& operator=(GetDigitalEmployeeSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetDigitalEmployeeSkillRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

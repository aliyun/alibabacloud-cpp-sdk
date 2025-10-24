// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETADBSECUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETADBSECUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class SetAdbSecureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAdbSecureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetAdbSecureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetAdbSecureRequest() = default ;
    SetAdbSecureRequest(const SetAdbSecureRequest &) = default ;
    SetAdbSecureRequest(SetAdbSecureRequest &&) = default ;
    SetAdbSecureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAdbSecureRequest() = default ;
    SetAdbSecureRequest& operator=(const SetAdbSecureRequest &) = default ;
    SetAdbSecureRequest& operator=(SetAdbSecureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && return this->status_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline SetAdbSecureRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline SetAdbSecureRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SetAdbSecureRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IDs of the cloud phone instances. You can specify a maximum of 50 cloud phone instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The status of the ADB authentication feature.
    // 
    // Valid values:
    // 
    // *   0: The ADB authentication feature is disabled.
    // *   1: The ADB authentication feature is enabled.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

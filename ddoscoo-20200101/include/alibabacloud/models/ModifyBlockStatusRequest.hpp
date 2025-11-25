// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBLOCKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBLOCKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyBlockStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBlockStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBlockStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyBlockStatusRequest() = default ;
    ModifyBlockStatusRequest(const ModifyBlockStatusRequest &) = default ;
    ModifyBlockStatusRequest(ModifyBlockStatusRequest &&) = default ;
    ModifyBlockStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBlockStatusRequest() = default ;
    ModifyBlockStatusRequest& operator=(const ModifyBlockStatusRequest &) = default ;
    ModifyBlockStatusRequest& operator=(ModifyBlockStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->instanceId_ == nullptr && return this->lines_ == nullptr && return this->status_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ModifyBlockStatusRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBlockStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const vector<string> & lines() const { DARABONBA_PTR_GET_CONST(lines_, vector<string>) };
    inline vector<string> lines() { DARABONBA_PTR_GET(lines_, vector<string>) };
    inline ModifyBlockStatusRequest& setLines(const vector<string> & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline ModifyBlockStatusRequest& setLines(vector<string> && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyBlockStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The blocking period. Valid values: **15** to **43200**. Unit: minutes.
    // 
    // > If you set **Status** to **do**, you must also specify this parameter.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the Anti-DDoS Proxy (Chinese Mainland) instance to manage.
    // 
    // >  You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all Anti-DDoS Proxy instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // An array consisting of the Internet service provider (ISP) lines from which traffic is blocked.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> lines_ = nullptr;
    // Specifies the status of the Diversion from Origin Server policy. Valid values:
    // 
    // *   **do**: enables the policy.
    // *   **undo**: disables the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

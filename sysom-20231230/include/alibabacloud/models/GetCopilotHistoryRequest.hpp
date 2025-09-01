// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOPILOTHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOPILOTHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetCopilotHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCopilotHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetCopilotHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
    };
    GetCopilotHistoryRequest() = default ;
    GetCopilotHistoryRequest(const GetCopilotHistoryRequest &) = default ;
    GetCopilotHistoryRequest(GetCopilotHistoryRequest &&) = default ;
    GetCopilotHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCopilotHistoryRequest() = default ;
    GetCopilotHistoryRequest& operator=(const GetCopilotHistoryRequest &) = default ;
    GetCopilotHistoryRequest& operator=(GetCopilotHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetCopilotHistoryRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

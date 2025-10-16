// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetMemoryEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    GetMemoryEventRequest() = default ;
    GetMemoryEventRequest(const GetMemoryEventRequest &) = default ;
    GetMemoryEventRequest(GetMemoryEventRequest &&) = default ;
    GetMemoryEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryEventRequest() = default ;
    GetMemoryEventRequest& operator=(const GetMemoryEventRequest &) = default ;
    GetMemoryEventRequest& operator=(GetMemoryEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetMemoryEventRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetMemoryEventRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    std::shared_ptr<int64_t> from_ = nullptr;
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

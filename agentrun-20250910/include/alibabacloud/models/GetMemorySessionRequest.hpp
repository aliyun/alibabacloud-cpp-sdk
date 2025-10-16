// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetMemorySessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemorySessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemorySessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    GetMemorySessionRequest() = default ;
    GetMemorySessionRequest(const GetMemorySessionRequest &) = default ;
    GetMemorySessionRequest(GetMemorySessionRequest &&) = default ;
    GetMemorySessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemorySessionRequest() = default ;
    GetMemorySessionRequest& operator=(const GetMemorySessionRequest &) = default ;
    GetMemorySessionRequest& operator=(GetMemorySessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->size_ == nullptr && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetMemorySessionRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetMemorySessionRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetMemorySessionRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    std::shared_ptr<int64_t> from_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

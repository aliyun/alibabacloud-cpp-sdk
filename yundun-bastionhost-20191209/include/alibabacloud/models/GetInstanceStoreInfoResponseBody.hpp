// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESTOREINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESTOREINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceStoreInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceStoreInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceStoreInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetInstanceStoreInfoResponseBody() = default ;
    GetInstanceStoreInfoResponseBody(const GetInstanceStoreInfoResponseBody &) = default ;
    GetInstanceStoreInfoResponseBody(GetInstanceStoreInfoResponseBody &&) = default ;
    GetInstanceStoreInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceStoreInfoResponseBody() = default ;
    GetInstanceStoreInfoResponseBody& operator=(const GetInstanceStoreInfoResponseBody &) = default ;
    GetInstanceStoreInfoResponseBody& operator=(GetInstanceStoreInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->requestId_ == nullptr && return this->usage_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int64_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0L) };
    inline GetInstanceStoreInfoResponseBody& setMax(int64_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceStoreInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline GetInstanceStoreInfoResponseBody& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<int64_t> max_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

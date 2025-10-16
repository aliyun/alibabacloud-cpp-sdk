// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLSLOGDISPATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESLSLOGDISPATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateSlsLogDispatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlsLogDispatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlsLogDispatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    CreateSlsLogDispatchRequest() = default ;
    CreateSlsLogDispatchRequest(const CreateSlsLogDispatchRequest &) = default ;
    CreateSlsLogDispatchRequest(CreateSlsLogDispatchRequest &&) = default ;
    CreateSlsLogDispatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlsLogDispatchRequest() = default ;
    CreateSlsLogDispatchRequest& operator=(const CreateSlsLogDispatchRequest &) = default ;
    CreateSlsLogDispatchRequest& operator=(CreateSlsLogDispatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsRegionId_ == nullptr
        && return this->ttl_ == nullptr; };
    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string slsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline CreateSlsLogDispatchRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline CreateSlsLogDispatchRequest& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The region ID of the Simple Log Service project.
    std::shared_ptr<string> slsRegionId_ = nullptr;
    // The log retention period. Unit: days.
    std::shared_ptr<int64_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

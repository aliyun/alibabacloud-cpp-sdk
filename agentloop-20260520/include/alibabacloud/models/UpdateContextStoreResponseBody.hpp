// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateContextStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(strategyVersion, strategyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(strategyVersion, strategyVersion_);
    };
    UpdateContextStoreResponseBody() = default ;
    UpdateContextStoreResponseBody(const UpdateContextStoreResponseBody &) = default ;
    UpdateContextStoreResponseBody(UpdateContextStoreResponseBody &&) = default ;
    UpdateContextStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextStoreResponseBody() = default ;
    UpdateContextStoreResponseBody& operator=(const UpdateContextStoreResponseBody &) = default ;
    UpdateContextStoreResponseBody& operator=(UpdateContextStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategyVersion_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateContextStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyVersion Field Functions 
    bool hasStrategyVersion() const { return this->strategyVersion_ != nullptr;};
    void deleteStrategyVersion() { this->strategyVersion_ = nullptr;};
    inline int32_t getStrategyVersion() const { DARABONBA_PTR_GET_DEFAULT(strategyVersion_, 0) };
    inline UpdateContextStoreResponseBody& setStrategyVersion(int32_t strategyVersion) { DARABONBA_PTR_SET_VALUE(strategyVersion_, strategyVersion) };


  protected:
    // The request ID, which is used to locate the request during troubleshooting.
    shared_ptr<string> requestId_ {};
    // The effective strategy version number after the update for the memory type. If the strategy remains unchanged, the version number is the same as before the update.
    shared_ptr<int32_t> strategyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETEREGISTERLIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETEREGISTERLIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CompleteRegisterLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteRegisterLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dependIntegral, dependIntegral_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteRegisterLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dependIntegral, dependIntegral_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
    };
    CompleteRegisterLibraryRequest() = default ;
    CompleteRegisterLibraryRequest(const CompleteRegisterLibraryRequest &) = default ;
    CompleteRegisterLibraryRequest(CompleteRegisterLibraryRequest &&) = default ;
    CompleteRegisterLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteRegisterLibraryRequest() = default ;
    CompleteRegisterLibraryRequest& operator=(const CompleteRegisterLibraryRequest &) = default ;
    CompleteRegisterLibraryRequest& operator=(CompleteRegisterLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependIntegral_ == nullptr
        && this->marketId_ == nullptr; };
    // dependIntegral Field Functions 
    bool hasDependIntegral() const { return this->dependIntegral_ != nullptr;};
    void deleteDependIntegral() { this->dependIntegral_ = nullptr;};
    inline int32_t getDependIntegral() const { DARABONBA_PTR_GET_DEFAULT(dependIntegral_, 0) };
    inline CompleteRegisterLibraryRequest& setDependIntegral(int32_t dependIntegral) { DARABONBA_PTR_SET_VALUE(dependIntegral_, dependIntegral) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline CompleteRegisterLibraryRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


  protected:
    shared_ptr<int32_t> dependIntegral_ {};
    shared_ptr<int64_t> marketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

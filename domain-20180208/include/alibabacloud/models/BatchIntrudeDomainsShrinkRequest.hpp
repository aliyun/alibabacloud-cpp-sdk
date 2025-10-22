// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchIntrudeDomainsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchIntrudeDomainsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchIntrudeDomainsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNamesShrink_);
    };
    BatchIntrudeDomainsShrinkRequest() = default ;
    BatchIntrudeDomainsShrinkRequest(const BatchIntrudeDomainsShrinkRequest &) = default ;
    BatchIntrudeDomainsShrinkRequest(BatchIntrudeDomainsShrinkRequest &&) = default ;
    BatchIntrudeDomainsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchIntrudeDomainsShrinkRequest() = default ;
    BatchIntrudeDomainsShrinkRequest& operator=(const BatchIntrudeDomainsShrinkRequest &) = default ;
    BatchIntrudeDomainsShrinkRequest& operator=(BatchIntrudeDomainsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNamesShrink_ == nullptr; };
    // domainNamesShrink Field Functions 
    bool hasDomainNamesShrink() const { return this->domainNamesShrink_ != nullptr;};
    void deleteDomainNamesShrink() { this->domainNamesShrink_ = nullptr;};
    inline string domainNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(domainNamesShrink_, "") };
    inline BatchIntrudeDomainsShrinkRequest& setDomainNamesShrink(string domainNamesShrink) { DARABONBA_PTR_SET_VALUE(domainNamesShrink_, domainNamesShrink) };


  protected:
    std::shared_ptr<string> domainNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVELOPERPBCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVELOPERPBCSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListDeveloperPbcsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeveloperPbcsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeveloperPbcsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
    };
    ListDeveloperPbcsRequest() = default ;
    ListDeveloperPbcsRequest(const ListDeveloperPbcsRequest &) = default ;
    ListDeveloperPbcsRequest(ListDeveloperPbcsRequest &&) = default ;
    ListDeveloperPbcsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeveloperPbcsRequest() = default ;
    ListDeveloperPbcsRequest& operator=(const ListDeveloperPbcsRequest &) = default ;
    ListDeveloperPbcsRequest& operator=(ListDeveloperPbcsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->marketId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ListDeveloperPbcsRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline ListDeveloperPbcsRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> marketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

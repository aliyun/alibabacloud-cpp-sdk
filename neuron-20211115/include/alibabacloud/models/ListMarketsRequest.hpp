// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMARKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMARKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListMarketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMarketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMarketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
    };
    ListMarketsRequest() = default ;
    ListMarketsRequest(const ListMarketsRequest &) = default ;
    ListMarketsRequest(ListMarketsRequest &&) = default ;
    ListMarketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMarketsRequest() = default ;
    ListMarketsRequest& operator=(const ListMarketsRequest &) = default ;
    ListMarketsRequest& operator=(ListMarketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ListMarketsRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

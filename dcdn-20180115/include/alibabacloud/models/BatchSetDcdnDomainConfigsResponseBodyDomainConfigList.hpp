// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchSetDcdnDomainConfigsResponseBodyDomainConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDcdnDomainConfigsResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigModel, domainConfigModel_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDcdnDomainConfigsResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigModel, domainConfigModel_);
    };
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigList() = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigList(const BatchSetDcdnDomainConfigsResponseBodyDomainConfigList &) = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigList(BatchSetDcdnDomainConfigsResponseBodyDomainConfigList &&) = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDcdnDomainConfigsResponseBodyDomainConfigList() = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigList& operator=(const BatchSetDcdnDomainConfigsResponseBodyDomainConfigList &) = default ;
    BatchSetDcdnDomainConfigsResponseBodyDomainConfigList& operator=(BatchSetDcdnDomainConfigsResponseBodyDomainConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigModel_ != nullptr; };
    // domainConfigModel Field Functions 
    bool hasDomainConfigModel() const { return this->domainConfigModel_ != nullptr;};
    void deleteDomainConfigModel() { this->domainConfigModel_ = nullptr;};
    inline const vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel> & domainConfigModel() const { DARABONBA_PTR_GET_CONST(domainConfigModel_, vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel>) };
    inline vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel> domainConfigModel() { DARABONBA_PTR_GET(domainConfigModel_, vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel>) };
    inline BatchSetDcdnDomainConfigsResponseBodyDomainConfigList& setDomainConfigModel(const vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel> & domainConfigModel) { DARABONBA_PTR_SET_VALUE(domainConfigModel_, domainConfigModel) };
    inline BatchSetDcdnDomainConfigsResponseBodyDomainConfigList& setDomainConfigModel(vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel> && domainConfigModel) { DARABONBA_PTR_SET_RVALUE(domainConfigModel_, domainConfigModel) };


  protected:
    std::shared_ptr<vector<Models::BatchSetDcdnDomainConfigsResponseBodyDomainConfigListDomainConfigModel>> domainConfigModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

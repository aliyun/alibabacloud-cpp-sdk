// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETCDNDOMAINCONFIGRESPONSEBODYDOMAINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETCDNDOMAINCONFIGRESPONSEBODYDOMAINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchSetCdnDomainConfigResponseBodyDomainConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetCdnDomainConfigResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigModel, domainConfigModel_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetCdnDomainConfigResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigModel, domainConfigModel_);
    };
    BatchSetCdnDomainConfigResponseBodyDomainConfigList() = default ;
    BatchSetCdnDomainConfigResponseBodyDomainConfigList(const BatchSetCdnDomainConfigResponseBodyDomainConfigList &) = default ;
    BatchSetCdnDomainConfigResponseBodyDomainConfigList(BatchSetCdnDomainConfigResponseBodyDomainConfigList &&) = default ;
    BatchSetCdnDomainConfigResponseBodyDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetCdnDomainConfigResponseBodyDomainConfigList() = default ;
    BatchSetCdnDomainConfigResponseBodyDomainConfigList& operator=(const BatchSetCdnDomainConfigResponseBodyDomainConfigList &) = default ;
    BatchSetCdnDomainConfigResponseBodyDomainConfigList& operator=(BatchSetCdnDomainConfigResponseBodyDomainConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfigModel_ == nullptr; };
    // domainConfigModel Field Functions 
    bool hasDomainConfigModel() const { return this->domainConfigModel_ != nullptr;};
    void deleteDomainConfigModel() { this->domainConfigModel_ = nullptr;};
    inline const vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel> & domainConfigModel() const { DARABONBA_PTR_GET_CONST(domainConfigModel_, vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel>) };
    inline vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel> domainConfigModel() { DARABONBA_PTR_GET(domainConfigModel_, vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel>) };
    inline BatchSetCdnDomainConfigResponseBodyDomainConfigList& setDomainConfigModel(const vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel> & domainConfigModel) { DARABONBA_PTR_SET_VALUE(domainConfigModel_, domainConfigModel) };
    inline BatchSetCdnDomainConfigResponseBodyDomainConfigList& setDomainConfigModel(vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel> && domainConfigModel) { DARABONBA_PTR_SET_RVALUE(domainConfigModel_, domainConfigModel) };


  protected:
    std::shared_ptr<vector<Models::BatchSetCdnDomainConfigResponseBodyDomainConfigListDomainConfigModel>> domainConfigModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

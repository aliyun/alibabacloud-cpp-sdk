// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMAPPINGRESPONSEBODYLIVEDOMAINMODELSLIVEDOMAINMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMAPPINGRESPONSEBODYLIVEDOMAINMODELSLIVEDOMAINMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel() = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel(const DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel &) = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel(DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel &&) = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel() = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel& operator=(const DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel &) = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel& operator=(DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->type_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name to which the queried domain name is mapped.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the queried domain name. Valid values:
    // 
    // *   **vhost**: main streaming domain
    // *   **publish**: ingest domain
    // *   **play**: sub-streaming domain
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

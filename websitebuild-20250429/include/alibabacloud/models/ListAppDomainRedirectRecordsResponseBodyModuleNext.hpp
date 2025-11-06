// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPDOMAINREDIRECTRECORDSRESPONSEBODYMODULENEXT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPDOMAINREDIRECTRECORDSRESPONSEBODYMODULENEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppDomainRedirectRecordsResponseBodyModuleNext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppDomainRedirectRecordsResponseBodyModuleNext& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SourceDomain, sourceDomain_);
      DARABONBA_PTR_TO_JSON(TargetDomain, targetDomain_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppDomainRedirectRecordsResponseBodyModuleNext& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SourceDomain, sourceDomain_);
      DARABONBA_PTR_FROM_JSON(TargetDomain, targetDomain_);
    };
    ListAppDomainRedirectRecordsResponseBodyModuleNext() = default ;
    ListAppDomainRedirectRecordsResponseBodyModuleNext(const ListAppDomainRedirectRecordsResponseBodyModuleNext &) = default ;
    ListAppDomainRedirectRecordsResponseBodyModuleNext(ListAppDomainRedirectRecordsResponseBodyModuleNext &&) = default ;
    ListAppDomainRedirectRecordsResponseBodyModuleNext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppDomainRedirectRecordsResponseBodyModuleNext() = default ;
    ListAppDomainRedirectRecordsResponseBodyModuleNext& operator=(const ListAppDomainRedirectRecordsResponseBodyModuleNext &) = default ;
    ListAppDomainRedirectRecordsResponseBodyModuleNext& operator=(ListAppDomainRedirectRecordsResponseBodyModuleNext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr
        && return this->sourceDomain_ == nullptr && return this->targetDomain_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline ListAppDomainRedirectRecordsResponseBodyModuleNext& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // sourceDomain Field Functions 
    bool hasSourceDomain() const { return this->sourceDomain_ != nullptr;};
    void deleteSourceDomain() { this->sourceDomain_ = nullptr;};
    inline string sourceDomain() const { DARABONBA_PTR_GET_DEFAULT(sourceDomain_, "") };
    inline ListAppDomainRedirectRecordsResponseBodyModuleNext& setSourceDomain(string sourceDomain) { DARABONBA_PTR_SET_VALUE(sourceDomain_, sourceDomain) };


    // targetDomain Field Functions 
    bool hasTargetDomain() const { return this->targetDomain_ != nullptr;};
    void deleteTargetDomain() { this->targetDomain_ = nullptr;};
    inline string targetDomain() const { DARABONBA_PTR_GET_DEFAULT(targetDomain_, "") };
    inline ListAppDomainRedirectRecordsResponseBodyModuleNext& setTargetDomain(string targetDomain) { DARABONBA_PTR_SET_VALUE(targetDomain_, targetDomain) };


  protected:
    std::shared_ptr<string> recordId_ = nullptr;
    std::shared_ptr<string> sourceDomain_ = nullptr;
    std::shared_ptr<string> targetDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHONLINEMASTER_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHONLINEMASTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDeployGraphResponseBodyResultGraphOnlineMaster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeployGraphResponseBodyResultGraphOnlineMaster& obj) { 
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(hippoId, hippoId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeployGraphResponseBodyResultGraphOnlineMaster& obj) { 
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(hippoId, hippoId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetDeployGraphResponseBodyResultGraphOnlineMaster() = default ;
    GetDeployGraphResponseBodyResultGraphOnlineMaster(const GetDeployGraphResponseBodyResultGraphOnlineMaster &) = default ;
    GetDeployGraphResponseBodyResultGraphOnlineMaster(GetDeployGraphResponseBodyResultGraphOnlineMaster &&) = default ;
    GetDeployGraphResponseBodyResultGraphOnlineMaster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeployGraphResponseBodyResultGraphOnlineMaster() = default ;
    GetDeployGraphResponseBodyResultGraphOnlineMaster& operator=(const GetDeployGraphResponseBodyResultGraphOnlineMaster &) = default ;
    GetDeployGraphResponseBodyResultGraphOnlineMaster& operator=(GetDeployGraphResponseBodyResultGraphOnlineMaster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->hippoId_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetDeployGraphResponseBodyResultGraphOnlineMaster& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // hippoId Field Functions 
    bool hasHippoId() const { return this->hippoId_ != nullptr;};
    void deleteHippoId() { this->hippoId_ = nullptr;};
    inline string hippoId() const { DARABONBA_PTR_GET_DEFAULT(hippoId_, "") };
    inline GetDeployGraphResponseBodyResultGraphOnlineMaster& setHippoId(string hippoId) { DARABONBA_PTR_SET_VALUE(hippoId_, hippoId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDeployGraphResponseBodyResultGraphOnlineMaster& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeployGraphResponseBodyResultGraphOnlineMaster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the data center.
    std::shared_ptr<string> domainName_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> hippoId_ = nullptr;
    // The ID of the data center.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the online cluster.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

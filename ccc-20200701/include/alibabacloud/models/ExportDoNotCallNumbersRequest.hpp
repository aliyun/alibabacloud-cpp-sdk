// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDONOTCALLNUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDONOTCALLNUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ExportDoNotCallNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDoNotCallNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDoNotCallNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
    };
    ExportDoNotCallNumbersRequest() = default ;
    ExportDoNotCallNumbersRequest(const ExportDoNotCallNumbersRequest &) = default ;
    ExportDoNotCallNumbersRequest(ExportDoNotCallNumbersRequest &&) = default ;
    ExportDoNotCallNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDoNotCallNumbersRequest() = default ;
    ExportDoNotCallNumbersRequest& operator=(const ExportDoNotCallNumbersRequest &) = default ;
    ExportDoNotCallNumbersRequest& operator=(ExportDoNotCallNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scope_ == nullptr && return this->searchPattern_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportDoNotCallNumbersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ExportDoNotCallNumbersRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ExportDoNotCallNumbersRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> searchPattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

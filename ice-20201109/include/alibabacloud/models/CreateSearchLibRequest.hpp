// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SearchLibConfig, searchLibConfig_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchLibConfig, searchLibConfig_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    CreateSearchLibRequest() = default ;
    CreateSearchLibRequest(const CreateSearchLibRequest &) = default ;
    CreateSearchLibRequest(CreateSearchLibRequest &&) = default ;
    CreateSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSearchLibRequest() = default ;
    CreateSearchLibRequest& operator=(const CreateSearchLibRequest &) = default ;
    CreateSearchLibRequest& operator=(CreateSearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchLibConfig_ == nullptr
        && this->searchLibName_ == nullptr; };
    // searchLibConfig Field Functions 
    bool hasSearchLibConfig() const { return this->searchLibConfig_ != nullptr;};
    void deleteSearchLibConfig() { this->searchLibConfig_ = nullptr;};
    inline string getSearchLibConfig() const { DARABONBA_PTR_GET_DEFAULT(searchLibConfig_, "") };
    inline CreateSearchLibRequest& setSearchLibConfig(string searchLibConfig) { DARABONBA_PTR_SET_VALUE(searchLibConfig_, searchLibConfig) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline CreateSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    shared_ptr<string> searchLibConfig_ {};
    // The name of the search library. The name can contain letters and digits and must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> searchLibName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AlterSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SearchLibConfig, searchLibConfig_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, AlterSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchLibConfig, searchLibConfig_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    AlterSearchLibRequest() = default ;
    AlterSearchLibRequest(const AlterSearchLibRequest &) = default ;
    AlterSearchLibRequest(AlterSearchLibRequest &&) = default ;
    AlterSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterSearchLibRequest() = default ;
    AlterSearchLibRequest& operator=(const AlterSearchLibRequest &) = default ;
    AlterSearchLibRequest& operator=(AlterSearchLibRequest &&) = default ;
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
    inline AlterSearchLibRequest& setSearchLibConfig(string searchLibConfig) { DARABONBA_PTR_SET_VALUE(searchLibConfig_, searchLibConfig) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline AlterSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    shared_ptr<string> searchLibConfig_ {};
    // This parameter is required.
    shared_ptr<string> searchLibName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

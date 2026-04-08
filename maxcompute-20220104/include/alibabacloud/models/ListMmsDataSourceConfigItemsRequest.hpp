// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDATASOURCECONFIGITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDATASOURCECONFIGITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDataSourceConfigItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDataSourceConfigItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDataSourceConfigItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListMmsDataSourceConfigItemsRequest() = default ;
    ListMmsDataSourceConfigItemsRequest(const ListMmsDataSourceConfigItemsRequest &) = default ;
    ListMmsDataSourceConfigItemsRequest(ListMmsDataSourceConfigItemsRequest &&) = default ;
    ListMmsDataSourceConfigItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDataSourceConfigItemsRequest() = default ;
    ListMmsDataSourceConfigItemsRequest& operator=(const ListMmsDataSourceConfigItemsRequest &) = default ;
    ListMmsDataSourceConfigItemsRequest& operator=(ListMmsDataSourceConfigItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sourceType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListMmsDataSourceConfigItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListMmsDataSourceConfigItemsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

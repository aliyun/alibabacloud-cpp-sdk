// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListDataSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attributeName, attributeName_);
      DARABONBA_ANY_TO_JSON(filter, filter_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attributeName, attributeName_);
      DARABONBA_ANY_FROM_JSON(filter, filter_);
    };
    ListDataSourcesRequest() = default ;
    ListDataSourcesRequest(const ListDataSourcesRequest &) = default ;
    ListDataSourcesRequest(ListDataSourcesRequest &&) = default ;
    ListDataSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesRequest() = default ;
    ListDataSourcesRequest& operator=(const ListDataSourcesRequest &) = default ;
    ListDataSourcesRequest& operator=(ListDataSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeName_ != nullptr
        && this->filter_ != nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline string attributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
    inline ListDataSourcesRequest& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline     const Darabonba::Json & filter() const { DARABONBA_GET(filter_) };
    Darabonba::Json & filter() { DARABONBA_GET(filter_) };
    inline ListDataSourcesRequest& setFilter(const Darabonba::Json & filter) { DARABONBA_SET_VALUE(filter_, filter) };
    inline ListDataSourcesRequest& setFilter(Darabonba::Json & filter) { DARABONBA_SET_RVALUE(filter_, filter) };


  protected:
    // The name of the property. RegionId is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> attributeName_ = nullptr;
    // The filter conditions. JSON format:{"key1":"value1"}.
    Darabonba::Json filter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif

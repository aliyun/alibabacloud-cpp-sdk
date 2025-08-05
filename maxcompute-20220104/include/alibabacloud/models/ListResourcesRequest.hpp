// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
    };
    ListResourcesRequest() = default ;
    ListResourcesRequest(const ListResourcesRequest &) = default ;
    ListResourcesRequest(ListResourcesRequest &&) = default ;
    ListResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesRequest() = default ;
    ListResourcesRequest& operator=(const ListResourcesRequest &) = default ;
    ListResourcesRequest& operator=(ListResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->marker_ != nullptr
        && this->maxItem_ != nullptr && this->name_ != nullptr && this->schemaName_ != nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListResourcesRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListResourcesRequest& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListResourcesRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    // Specifies the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries to return on each page.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

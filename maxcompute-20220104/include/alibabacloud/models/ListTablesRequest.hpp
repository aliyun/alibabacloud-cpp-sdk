// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListTablesRequest() = default ;
    ListTablesRequest(const ListTablesRequest &) = default ;
    ListTablesRequest(ListTablesRequest &&) = default ;
    ListTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesRequest() = default ;
    ListTablesRequest& operator=(const ListTablesRequest &) = default ;
    ListTablesRequest& operator=(ListTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->marker_ != nullptr
        && this->maxItem_ != nullptr && this->prefix_ != nullptr && this->schemaName_ != nullptr && this->type_ != nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListTablesRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListTablesRequest& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListTablesRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListTablesRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTablesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries to return on each page.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    // The names of the returned resources. The names must start with the value specified by the prefix parameter. If the prefix parameter is set to a, the names of the returned resources must start with a.
    std::shared_ptr<string> prefix_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The type of the table.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

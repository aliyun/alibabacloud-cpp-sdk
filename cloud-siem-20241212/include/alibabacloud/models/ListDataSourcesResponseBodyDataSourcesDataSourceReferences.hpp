// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATASOURCESDATASOURCEREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATASOURCESDATASOURCEREFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourcesResponseBodyDataSourcesDataSourceReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyDataSourcesDataSourceReferences& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyDataSourcesDataSourceReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
    };
    ListDataSourcesResponseBodyDataSourcesDataSourceReferences() = default ;
    ListDataSourcesResponseBodyDataSourcesDataSourceReferences(const ListDataSourcesResponseBodyDataSourcesDataSourceReferences &) = default ;
    ListDataSourcesResponseBodyDataSourcesDataSourceReferences(ListDataSourcesResponseBodyDataSourcesDataSourceReferences &&) = default ;
    ListDataSourcesResponseBodyDataSourcesDataSourceReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyDataSourcesDataSourceReferences() = default ;
    ListDataSourcesResponseBodyDataSourcesDataSourceReferences& operator=(const ListDataSourcesResponseBodyDataSourcesDataSourceReferences &) = default ;
    ListDataSourcesResponseBodyDataSourcesDataSourceReferences& operator=(ListDataSourcesResponseBodyDataSourcesDataSourceReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionId_ == nullptr; };
    // dataIngestionId Field Functions 
    bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
    void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
    inline string dataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
    inline ListDataSourcesResponseBodyDataSourcesDataSourceReferences& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


  protected:
    std::shared_ptr<string> dataIngestionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

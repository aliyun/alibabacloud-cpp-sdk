// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListDataSourcesResponseBodyDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    ListDataSourcesResponseBodyDataSources() = default ;
    ListDataSourcesResponseBodyDataSources(const ListDataSourcesResponseBodyDataSources &) = default ;
    ListDataSourcesResponseBodyDataSources(ListDataSourcesResponseBodyDataSources &&) = default ;
    ListDataSourcesResponseBodyDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyDataSources() = default ;
    ListDataSourcesResponseBodyDataSources& operator=(const ListDataSourcesResponseBodyDataSources &) = default ;
    ListDataSourcesResponseBodyDataSources& operator=(ListDataSourcesResponseBodyDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListDataSourcesResponseBodyDataSources& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the data.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif

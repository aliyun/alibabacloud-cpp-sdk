// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCESDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCESDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourcesResponseBodyPagingInfoResourcesDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyPagingInfoResourcesDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyPagingInfoResourcesDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListResourcesResponseBodyPagingInfoResourcesDataSource() = default ;
    ListResourcesResponseBodyPagingInfoResourcesDataSource(const ListResourcesResponseBodyPagingInfoResourcesDataSource &) = default ;
    ListResourcesResponseBodyPagingInfoResourcesDataSource(ListResourcesResponseBodyPagingInfoResourcesDataSource &&) = default ;
    ListResourcesResponseBodyPagingInfoResourcesDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyPagingInfoResourcesDataSource() = default ;
    ListResourcesResponseBodyPagingInfoResourcesDataSource& operator=(const ListResourcesResponseBodyPagingInfoResourcesDataSource &) = default ;
    ListResourcesResponseBodyPagingInfoResourcesDataSource& operator=(ListResourcesResponseBodyPagingInfoResourcesDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesResponseBodyPagingInfoResourcesDataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListResourcesResponseBodyPagingInfoResourcesDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

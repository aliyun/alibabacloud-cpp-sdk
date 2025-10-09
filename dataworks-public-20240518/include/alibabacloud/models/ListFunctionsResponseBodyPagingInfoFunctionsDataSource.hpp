// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYPAGINGINFOFUNCTIONSDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYPAGINGINFOFUNCTIONSDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFunctionsResponseBodyPagingInfoFunctionsDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBodyPagingInfoFunctionsDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBodyPagingInfoFunctionsDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListFunctionsResponseBodyPagingInfoFunctionsDataSource() = default ;
    ListFunctionsResponseBodyPagingInfoFunctionsDataSource(const ListFunctionsResponseBodyPagingInfoFunctionsDataSource &) = default ;
    ListFunctionsResponseBodyPagingInfoFunctionsDataSource(ListFunctionsResponseBodyPagingInfoFunctionsDataSource &&) = default ;
    ListFunctionsResponseBodyPagingInfoFunctionsDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBodyPagingInfoFunctionsDataSource() = default ;
    ListFunctionsResponseBodyPagingInfoFunctionsDataSource& operator=(const ListFunctionsResponseBodyPagingInfoFunctionsDataSource &) = default ;
    ListFunctionsResponseBodyPagingInfoFunctionsDataSource& operator=(ListFunctionsResponseBodyPagingInfoFunctionsDataSource &&) = default ;
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
    inline ListFunctionsResponseBodyPagingInfoFunctionsDataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctionsDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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

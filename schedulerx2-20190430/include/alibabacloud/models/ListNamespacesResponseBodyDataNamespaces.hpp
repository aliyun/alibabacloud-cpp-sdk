// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYDATANAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYDATANAMESPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListNamespacesResponseBodyDataNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBodyDataNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UId, UId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBodyDataNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UId, UId_);
    };
    ListNamespacesResponseBodyDataNamespaces() = default ;
    ListNamespacesResponseBodyDataNamespaces(const ListNamespacesResponseBodyDataNamespaces &) = default ;
    ListNamespacesResponseBodyDataNamespaces(ListNamespacesResponseBodyDataNamespaces &&) = default ;
    ListNamespacesResponseBodyDataNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBodyDataNamespaces() = default ;
    ListNamespacesResponseBodyDataNamespaces& operator=(const ListNamespacesResponseBodyDataNamespaces &) = default ;
    ListNamespacesResponseBodyDataNamespaces& operator=(ListNamespacesResponseBodyDataNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->UId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNamespacesResponseBodyDataNamespaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNamespacesResponseBodyDataNamespaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // UId Field Functions 
    bool hasUId() const { return this->UId_ != nullptr;};
    void deleteUId() { this->UId_ = nullptr;};
    inline string UId() const { DARABONBA_PTR_GET_DEFAULT(UId_, "") };
    inline ListNamespacesResponseBodyDataNamespaces& setUId(string UId) { DARABONBA_PTR_SET_VALUE(UId_, UId) };


  protected:
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> UId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif

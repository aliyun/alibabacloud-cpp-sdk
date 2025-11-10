// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSRESPONSEBODYSYSTEMTOOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSRESPONSEBODYSYSTEMTOOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServerSystemToolsResponseBodySystemTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServerSystemToolsResponseBodySystemTools& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServerSystemToolsResponseBodySystemTools& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListApiMcpServerSystemToolsResponseBodySystemTools() = default ;
    ListApiMcpServerSystemToolsResponseBodySystemTools(const ListApiMcpServerSystemToolsResponseBodySystemTools &) = default ;
    ListApiMcpServerSystemToolsResponseBodySystemTools(ListApiMcpServerSystemToolsResponseBodySystemTools &&) = default ;
    ListApiMcpServerSystemToolsResponseBodySystemTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServerSystemToolsResponseBodySystemTools() = default ;
    ListApiMcpServerSystemToolsResponseBodySystemTools& operator=(const ListApiMcpServerSystemToolsResponseBodySystemTools &) = default ;
    ListApiMcpServerSystemToolsResponseBodySystemTools& operator=(ListApiMcpServerSystemToolsResponseBodySystemTools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApiMcpServerSystemToolsResponseBodySystemTools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApiMcpServerSystemToolsResponseBodySystemTools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif

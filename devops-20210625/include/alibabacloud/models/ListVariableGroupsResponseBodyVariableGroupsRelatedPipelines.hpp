// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVARIABLEGROUPSRESPONSEBODYVARIABLEGROUPSRELATEDPIPELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTVARIABLEGROUPSRESPONSEBODYVARIABLEGROUPSRELATEDPIPELINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines() = default ;
    ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines(const ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines &) = default ;
    ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines(ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines &&) = default ;
    ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines() = default ;
    ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines& operator=(const ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines &) = default ;
    ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines& operator=(ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

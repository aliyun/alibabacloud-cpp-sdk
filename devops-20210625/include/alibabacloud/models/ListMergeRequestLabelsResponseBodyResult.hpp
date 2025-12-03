// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTLABELSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTLABELSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestLabelsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestLabelsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestLabelsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListMergeRequestLabelsResponseBodyResult() = default ;
    ListMergeRequestLabelsResponseBodyResult(const ListMergeRequestLabelsResponseBodyResult &) = default ;
    ListMergeRequestLabelsResponseBodyResult(ListMergeRequestLabelsResponseBodyResult &&) = default ;
    ListMergeRequestLabelsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestLabelsResponseBodyResult() = default ;
    ListMergeRequestLabelsResponseBodyResult& operator=(const ListMergeRequestLabelsResponseBodyResult &) = default ;
    ListMergeRequestLabelsResponseBodyResult& operator=(ListMergeRequestLabelsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->color_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline ListMergeRequestLabelsResponseBodyResult& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMergeRequestLabelsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListMergeRequestLabelsResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMergeRequestLabelsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

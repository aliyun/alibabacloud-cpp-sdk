// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTLABELSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTLABELSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectLabelsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectLabelsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(openMergeRequestsCount, openMergeRequestsCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectLabelsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(openMergeRequestsCount, openMergeRequestsCount_);
    };
    ListProjectLabelsResponseBodyResult() = default ;
    ListProjectLabelsResponseBodyResult(const ListProjectLabelsResponseBodyResult &) = default ;
    ListProjectLabelsResponseBodyResult(ListProjectLabelsResponseBodyResult &&) = default ;
    ListProjectLabelsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectLabelsResponseBodyResult() = default ;
    ListProjectLabelsResponseBodyResult& operator=(const ListProjectLabelsResponseBodyResult &) = default ;
    ListProjectLabelsResponseBodyResult& operator=(ListProjectLabelsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->color_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->openMergeRequestsCount_ == nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline ListProjectLabelsResponseBodyResult& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProjectLabelsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListProjectLabelsResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectLabelsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openMergeRequestsCount Field Functions 
    bool hasOpenMergeRequestsCount() const { return this->openMergeRequestsCount_ != nullptr;};
    void deleteOpenMergeRequestsCount() { this->openMergeRequestsCount_ = nullptr;};
    inline int64_t openMergeRequestsCount() const { DARABONBA_PTR_GET_DEFAULT(openMergeRequestsCount_, 0L) };
    inline ListProjectLabelsResponseBodyResult& setOpenMergeRequestsCount(int64_t openMergeRequestsCount) { DARABONBA_PTR_SET_VALUE(openMergeRequestsCount_, openMergeRequestsCount) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> openMergeRequestsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTWORKITEMTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTWORKITEMTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectWorkitemTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectWorkitemTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectWorkitemTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
    };
    ListProjectWorkitemTypesRequest() = default ;
    ListProjectWorkitemTypesRequest(const ListProjectWorkitemTypesRequest &) = default ;
    ListProjectWorkitemTypesRequest(ListProjectWorkitemTypesRequest &&) = default ;
    ListProjectWorkitemTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectWorkitemTypesRequest() = default ;
    ListProjectWorkitemTypesRequest& operator=(const ListProjectWorkitemTypesRequest &) = default ;
    ListProjectWorkitemTypesRequest& operator=(ListProjectWorkitemTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->spaceType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListProjectWorkitemTypesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline ListProjectWorkitemTypesRequest& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

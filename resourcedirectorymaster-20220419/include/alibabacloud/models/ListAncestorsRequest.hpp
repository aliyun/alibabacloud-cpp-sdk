// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANCESTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANCESTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAncestorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAncestorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildId, childId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAncestorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildId, childId_);
    };
    ListAncestorsRequest() = default ;
    ListAncestorsRequest(const ListAncestorsRequest &) = default ;
    ListAncestorsRequest(ListAncestorsRequest &&) = default ;
    ListAncestorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAncestorsRequest() = default ;
    ListAncestorsRequest& operator=(const ListAncestorsRequest &) = default ;
    ListAncestorsRequest& operator=(ListAncestorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childId_ == nullptr; };
    // childId Field Functions 
    bool hasChildId() const { return this->childId_ != nullptr;};
    void deleteChildId() { this->childId_ = nullptr;};
    inline string childId() const { DARABONBA_PTR_GET_DEFAULT(childId_, "") };
    inline ListAncestorsRequest& setChildId(string childId) { DARABONBA_PTR_SET_VALUE(childId_, childId) };


  protected:
    // The ID of the subfolder.
    // 
    // This parameter is required.
    std::shared_ptr<string> childId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif

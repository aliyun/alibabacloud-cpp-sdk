// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITYTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITYTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListEntityTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntityTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntityTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    ListEntityTagsRequest() = default ;
    ListEntityTagsRequest(const ListEntityTagsRequest &) = default ;
    ListEntityTagsRequest(ListEntityTagsRequest &&) = default ;
    ListEntityTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntityTagsRequest() = default ;
    ListEntityTagsRequest& operator=(const ListEntityTagsRequest &) = default ;
    ListEntityTagsRequest& operator=(ListEntityTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualifiedName_ != nullptr; };
    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline ListEntityTagsRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    // The unique identifier of the entity. Example: maxcompute-table.projectA.tableA.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

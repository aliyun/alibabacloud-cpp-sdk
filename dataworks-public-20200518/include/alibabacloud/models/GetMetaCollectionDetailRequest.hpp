// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOLLECTIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOLLECTIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaCollectionDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCollectionDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCollectionDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    GetMetaCollectionDetailRequest() = default ;
    GetMetaCollectionDetailRequest(const GetMetaCollectionDetailRequest &) = default ;
    GetMetaCollectionDetailRequest(GetMetaCollectionDetailRequest &&) = default ;
    GetMetaCollectionDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCollectionDetailRequest() = default ;
    GetMetaCollectionDetailRequest& operator=(const GetMetaCollectionDetailRequest &) = default ;
    GetMetaCollectionDetailRequest& operator=(GetMetaCollectionDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualifiedName_ != nullptr; };
    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline GetMetaCollectionDetailRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    // The unique identifier of the collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

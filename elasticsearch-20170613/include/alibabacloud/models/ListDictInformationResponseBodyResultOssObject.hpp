// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTINFORMATIONRESPONSEBODYRESULTOSSOBJECT_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTINFORMATIONRESPONSEBODYRESULTOSSOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDictInformationResponseBodyResultOssObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictInformationResponseBodyResultOssObject& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(etag, etag_);
      DARABONBA_PTR_TO_JSON(key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictInformationResponseBodyResultOssObject& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(etag, etag_);
      DARABONBA_PTR_FROM_JSON(key, key_);
    };
    ListDictInformationResponseBodyResultOssObject() = default ;
    ListDictInformationResponseBodyResultOssObject(const ListDictInformationResponseBodyResultOssObject &) = default ;
    ListDictInformationResponseBodyResultOssObject(ListDictInformationResponseBodyResultOssObject &&) = default ;
    ListDictInformationResponseBodyResultOssObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictInformationResponseBodyResultOssObject() = default ;
    ListDictInformationResponseBodyResultOssObject& operator=(const ListDictInformationResponseBodyResultOssObject &) = default ;
    ListDictInformationResponseBodyResultOssObject& operator=(ListDictInformationResponseBodyResultOssObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->etag_ != nullptr && this->key_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListDictInformationResponseBodyResultOssObject& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // etag Field Functions 
    bool hasEtag() const { return this->etag_ != nullptr;};
    void deleteEtag() { this->etag_ = nullptr;};
    inline string etag() const { DARABONBA_PTR_GET_DEFAULT(etag_, "") };
    inline ListDictInformationResponseBodyResultOssObject& setEtag(string etag) { DARABONBA_PTR_SET_VALUE(etag_, etag) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListDictInformationResponseBodyResultOssObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> etag_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

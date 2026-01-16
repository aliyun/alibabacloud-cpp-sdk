// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDictInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(key, key_);
    };
    ListDictInformationRequest() = default ;
    ListDictInformationRequest(const ListDictInformationRequest &) = default ;
    ListDictInformationRequest(ListDictInformationRequest &&) = default ;
    ListDictInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictInformationRequest() = default ;
    ListDictInformationRequest& operator=(const ListDictInformationRequest &) = default ;
    ListDictInformationRequest& operator=(ListDictInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzerType_ == nullptr
        && this->bucketName_ == nullptr && this->key_ == nullptr; };
    // analyzerType Field Functions 
    bool hasAnalyzerType() const { return this->analyzerType_ != nullptr;};
    void deleteAnalyzerType() { this->analyzerType_ = nullptr;};
    inline string getAnalyzerType() const { DARABONBA_PTR_GET_DEFAULT(analyzerType_, "") };
    inline ListDictInformationRequest& setAnalyzerType(string analyzerType) { DARABONBA_PTR_SET_VALUE(analyzerType_, analyzerType) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListDictInformationRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListDictInformationRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    shared_ptr<string> analyzerType_ {};
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
    // This parameter is required.
    shared_ptr<string> key_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

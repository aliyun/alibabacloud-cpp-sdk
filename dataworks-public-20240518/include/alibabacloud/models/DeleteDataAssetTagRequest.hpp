// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAASSETTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAASSETTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteDataAssetTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataAssetTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataAssetTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DeleteDataAssetTagRequest() = default ;
    DeleteDataAssetTagRequest(const DeleteDataAssetTagRequest &) = default ;
    DeleteDataAssetTagRequest(DeleteDataAssetTagRequest &&) = default ;
    DeleteDataAssetTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataAssetTagRequest() = default ;
    DeleteDataAssetTagRequest& operator=(const DeleteDataAssetTagRequest &) = default ;
    DeleteDataAssetTagRequest& operator=(DeleteDataAssetTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DeleteDataAssetTagRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DeleteDataAssetTagRequest& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DeleteDataAssetTagRequest& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The tag key.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The tag values.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

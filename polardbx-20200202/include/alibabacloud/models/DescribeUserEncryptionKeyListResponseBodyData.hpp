// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeUserEncryptionKeyListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEncryptionKeyListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(KeyIds, keyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEncryptionKeyListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyIds, keyIds_);
    };
    DescribeUserEncryptionKeyListResponseBodyData() = default ;
    DescribeUserEncryptionKeyListResponseBodyData(const DescribeUserEncryptionKeyListResponseBodyData &) = default ;
    DescribeUserEncryptionKeyListResponseBodyData(DescribeUserEncryptionKeyListResponseBodyData &&) = default ;
    DescribeUserEncryptionKeyListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEncryptionKeyListResponseBodyData() = default ;
    DescribeUserEncryptionKeyListResponseBodyData& operator=(const DescribeUserEncryptionKeyListResponseBodyData &) = default ;
    DescribeUserEncryptionKeyListResponseBodyData& operator=(DescribeUserEncryptionKeyListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyIds_ == nullptr; };
    // keyIds Field Functions 
    bool hasKeyIds() const { return this->keyIds_ != nullptr;};
    void deleteKeyIds() { this->keyIds_ = nullptr;};
    inline const vector<string> & keyIds() const { DARABONBA_PTR_GET_CONST(keyIds_, vector<string>) };
    inline vector<string> keyIds() { DARABONBA_PTR_GET(keyIds_, vector<string>) };
    inline DescribeUserEncryptionKeyListResponseBodyData& setKeyIds(const vector<string> & keyIds) { DARABONBA_PTR_SET_VALUE(keyIds_, keyIds) };
    inline DescribeUserEncryptionKeyListResponseBodyData& setKeyIds(vector<string> && keyIds) { DARABONBA_PTR_SET_RVALUE(keyIds_, keyIds) };


  protected:
    std::shared_ptr<vector<string>> keyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

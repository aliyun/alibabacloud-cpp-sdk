// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYVERSIONSRESPONSEBODYKEYVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYVERSIONSRESPONSEBODYKEYVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKeyVersionsResponseBodyKeyVersionsKeyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeyVersionsResponseBodyKeyVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeyVersionsResponseBodyKeyVersions& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeyVersionsResponseBodyKeyVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
    };
    ListKeyVersionsResponseBodyKeyVersions() = default ;
    ListKeyVersionsResponseBodyKeyVersions(const ListKeyVersionsResponseBodyKeyVersions &) = default ;
    ListKeyVersionsResponseBodyKeyVersions(ListKeyVersionsResponseBodyKeyVersions &&) = default ;
    ListKeyVersionsResponseBodyKeyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeyVersionsResponseBodyKeyVersions() = default ;
    ListKeyVersionsResponseBodyKeyVersions& operator=(const ListKeyVersionsResponseBodyKeyVersions &) = default ;
    ListKeyVersionsResponseBodyKeyVersions& operator=(ListKeyVersionsResponseBodyKeyVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyVersion_ == nullptr; };
    // keyVersion Field Functions 
    bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
    void deleteKeyVersion() { this->keyVersion_ = nullptr;};
    inline const vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion> & keyVersion() const { DARABONBA_PTR_GET_CONST(keyVersion_, vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion>) };
    inline vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion> keyVersion() { DARABONBA_PTR_GET(keyVersion_, vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion>) };
    inline ListKeyVersionsResponseBodyKeyVersions& setKeyVersion(const vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion> & keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };
    inline ListKeyVersionsResponseBodyKeyVersions& setKeyVersion(vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion> && keyVersion) { DARABONBA_PTR_SET_RVALUE(keyVersion_, keyVersion) };


  protected:
    std::shared_ptr<vector<Models::ListKeyVersionsResponseBodyKeyVersionsKeyVersion>> keyVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

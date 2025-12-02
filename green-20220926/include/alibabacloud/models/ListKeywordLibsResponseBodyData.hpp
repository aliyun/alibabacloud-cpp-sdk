// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDLIBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDLIBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListKeywordLibsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordLibsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(KeywordCount, keywordCount_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(ServiceCodes, serviceCodes_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordLibsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(KeywordCount, keywordCount_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(ServiceCodes, serviceCodes_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListKeywordLibsResponseBodyData() = default ;
    ListKeywordLibsResponseBodyData(const ListKeywordLibsResponseBodyData &) = default ;
    ListKeywordLibsResponseBodyData(ListKeywordLibsResponseBodyData &&) = default ;
    ListKeywordLibsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordLibsResponseBodyData() = default ;
    ListKeywordLibsResponseBodyData& operator=(const ListKeywordLibsResponseBodyData &) = default ;
    ListKeywordLibsResponseBodyData& operator=(ListKeywordLibsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtModified_ == nullptr
        && return this->keywordCount_ == nullptr && return this->libId_ == nullptr && return this->libName_ == nullptr && return this->serviceCodes_ == nullptr && return this->uid_ == nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListKeywordLibsResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // keywordCount Field Functions 
    bool hasKeywordCount() const { return this->keywordCount_ != nullptr;};
    void deleteKeywordCount() { this->keywordCount_ = nullptr;};
    inline string keywordCount() const { DARABONBA_PTR_GET_DEFAULT(keywordCount_, "") };
    inline ListKeywordLibsResponseBodyData& setKeywordCount(string keywordCount) { DARABONBA_PTR_SET_VALUE(keywordCount_, keywordCount) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListKeywordLibsResponseBodyData& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ListKeywordLibsResponseBodyData& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // serviceCodes Field Functions 
    bool hasServiceCodes() const { return this->serviceCodes_ != nullptr;};
    void deleteServiceCodes() { this->serviceCodes_ = nullptr;};
    inline string serviceCodes() const { DARABONBA_PTR_GET_DEFAULT(serviceCodes_, "") };
    inline ListKeywordLibsResponseBodyData& setServiceCodes(string serviceCodes) { DARABONBA_PTR_SET_VALUE(serviceCodes_, serviceCodes) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListKeywordLibsResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Number of keywords.
    std::shared_ptr<string> keywordCount_ = nullptr;
    // Library ID.
    std::shared_ptr<string> libId_ = nullptr;
    // Library name.
    std::shared_ptr<string> libName_ = nullptr;
    // Service codes.
    std::shared_ptr<string> serviceCodes_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif

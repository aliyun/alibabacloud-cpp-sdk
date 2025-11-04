// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINDEXJOBRERUNRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINDEXJOBRERUNRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchIndexJobRerunResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchIndexJobRerunResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIdsNoExist, mediaIdsNoExist_);
    };
    friend void from_json(const Darabonba::Json& j, SearchIndexJobRerunResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIdsNoExist, mediaIdsNoExist_);
    };
    SearchIndexJobRerunResponseBodyData() = default ;
    SearchIndexJobRerunResponseBodyData(const SearchIndexJobRerunResponseBodyData &) = default ;
    SearchIndexJobRerunResponseBodyData(SearchIndexJobRerunResponseBodyData &&) = default ;
    SearchIndexJobRerunResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchIndexJobRerunResponseBodyData() = default ;
    SearchIndexJobRerunResponseBodyData& operator=(const SearchIndexJobRerunResponseBodyData &) = default ;
    SearchIndexJobRerunResponseBodyData& operator=(SearchIndexJobRerunResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIdsNoExist_ == nullptr; };
    // mediaIdsNoExist Field Functions 
    bool hasMediaIdsNoExist() const { return this->mediaIdsNoExist_ != nullptr;};
    void deleteMediaIdsNoExist() { this->mediaIdsNoExist_ = nullptr;};
    inline const vector<string> & mediaIdsNoExist() const { DARABONBA_PTR_GET_CONST(mediaIdsNoExist_, vector<string>) };
    inline vector<string> mediaIdsNoExist() { DARABONBA_PTR_GET(mediaIdsNoExist_, vector<string>) };
    inline SearchIndexJobRerunResponseBodyData& setMediaIdsNoExist(const vector<string> & mediaIdsNoExist) { DARABONBA_PTR_SET_VALUE(mediaIdsNoExist_, mediaIdsNoExist) };
    inline SearchIndexJobRerunResponseBodyData& setMediaIdsNoExist(vector<string> && mediaIdsNoExist) { DARABONBA_PTR_SET_RVALUE(mediaIdsNoExist_, mediaIdsNoExist) };


  protected:
    // The media asset IDs that do not exist.
    std::shared_ptr<vector<string>> mediaIdsNoExist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

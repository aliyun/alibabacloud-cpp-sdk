// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2REQUESTOPENCREATEPLAYINGLISTREQUESTCONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2REQUESTOPENCREATEPLAYINGLISTREQUESTCONTENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList& obj) { 
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList& obj) { 
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList() = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList(const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList &) = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList(CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList &&) = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList() = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList& operator=(const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList &) = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList& operator=(CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rawId_ != nullptr
        && this->source_ != nullptr; };
    // rawId Field Functions 
    bool hasRawId() const { return this->rawId_ != nullptr;};
    void deleteRawId() { this->rawId_ = nullptr;};
    inline string rawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> rawId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

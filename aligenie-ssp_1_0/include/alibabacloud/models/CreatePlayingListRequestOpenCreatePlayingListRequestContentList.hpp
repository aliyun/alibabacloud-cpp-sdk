// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUESTOPENCREATEPLAYINGLISTREQUESTCONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUESTOPENCREATEPLAYINGLISTREQUESTCONTENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListRequestOpenCreatePlayingListRequestContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListRequestOpenCreatePlayingListRequestContentList& obj) { 
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListRequestOpenCreatePlayingListRequestContentList& obj) { 
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CreatePlayingListRequestOpenCreatePlayingListRequestContentList() = default ;
    CreatePlayingListRequestOpenCreatePlayingListRequestContentList(const CreatePlayingListRequestOpenCreatePlayingListRequestContentList &) = default ;
    CreatePlayingListRequestOpenCreatePlayingListRequestContentList(CreatePlayingListRequestOpenCreatePlayingListRequestContentList &&) = default ;
    CreatePlayingListRequestOpenCreatePlayingListRequestContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListRequestOpenCreatePlayingListRequestContentList() = default ;
    CreatePlayingListRequestOpenCreatePlayingListRequestContentList& operator=(const CreatePlayingListRequestOpenCreatePlayingListRequestContentList &) = default ;
    CreatePlayingListRequestOpenCreatePlayingListRequestContentList& operator=(CreatePlayingListRequestOpenCreatePlayingListRequestContentList &&) = default ;
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
    inline CreatePlayingListRequestOpenCreatePlayingListRequestContentList& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreatePlayingListRequestOpenCreatePlayingListRequestContentList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


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

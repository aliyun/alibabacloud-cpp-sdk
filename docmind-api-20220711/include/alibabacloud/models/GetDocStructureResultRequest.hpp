// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCSTRUCTURERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCSTRUCTURERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetDocStructureResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocStructureResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageStrategy, imageStrategy_);
      DARABONBA_PTR_TO_JSON(RevealMarkdown, revealMarkdown_);
      DARABONBA_PTR_TO_JSON(UseUrlResponseBody, useUrlResponseBody_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocStructureResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageStrategy, imageStrategy_);
      DARABONBA_PTR_FROM_JSON(RevealMarkdown, revealMarkdown_);
      DARABONBA_PTR_FROM_JSON(UseUrlResponseBody, useUrlResponseBody_);
    };
    GetDocStructureResultRequest() = default ;
    GetDocStructureResultRequest(const GetDocStructureResultRequest &) = default ;
    GetDocStructureResultRequest(GetDocStructureResultRequest &&) = default ;
    GetDocStructureResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocStructureResultRequest() = default ;
    GetDocStructureResultRequest& operator=(const GetDocStructureResultRequest &) = default ;
    GetDocStructureResultRequest& operator=(GetDocStructureResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->imageStrategy_ == nullptr && return this->revealMarkdown_ == nullptr && return this->useUrlResponseBody_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDocStructureResultRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageStrategy Field Functions 
    bool hasImageStrategy() const { return this->imageStrategy_ != nullptr;};
    void deleteImageStrategy() { this->imageStrategy_ = nullptr;};
    inline string imageStrategy() const { DARABONBA_PTR_GET_DEFAULT(imageStrategy_, "") };
    inline GetDocStructureResultRequest& setImageStrategy(string imageStrategy) { DARABONBA_PTR_SET_VALUE(imageStrategy_, imageStrategy) };


    // revealMarkdown Field Functions 
    bool hasRevealMarkdown() const { return this->revealMarkdown_ != nullptr;};
    void deleteRevealMarkdown() { this->revealMarkdown_ = nullptr;};
    inline bool revealMarkdown() const { DARABONBA_PTR_GET_DEFAULT(revealMarkdown_, false) };
    inline GetDocStructureResultRequest& setRevealMarkdown(bool revealMarkdown) { DARABONBA_PTR_SET_VALUE(revealMarkdown_, revealMarkdown) };


    // useUrlResponseBody Field Functions 
    bool hasUseUrlResponseBody() const { return this->useUrlResponseBody_ != nullptr;};
    void deleteUseUrlResponseBody() { this->useUrlResponseBody_ = nullptr;};
    inline bool useUrlResponseBody() const { DARABONBA_PTR_GET_DEFAULT(useUrlResponseBody_, false) };
    inline GetDocStructureResultRequest& setUseUrlResponseBody(bool useUrlResponseBody) { DARABONBA_PTR_SET_VALUE(useUrlResponseBody_, useUrlResponseBody) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> imageStrategy_ = nullptr;
    std::shared_ptr<bool> revealMarkdown_ = nullptr;
    std::shared_ptr<bool> useUrlResponseBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif

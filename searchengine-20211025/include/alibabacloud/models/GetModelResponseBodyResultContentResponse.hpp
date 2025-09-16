// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetModelResponseBodyResultContentResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelResponseBodyResultContentResponse& obj) { 
      DARABONBA_PTR_TO_JSON(embeddings, embeddings_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelResponseBodyResultContentResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(embeddings, embeddings_);
    };
    GetModelResponseBodyResultContentResponse() = default ;
    GetModelResponseBodyResultContentResponse(const GetModelResponseBodyResultContentResponse &) = default ;
    GetModelResponseBodyResultContentResponse(GetModelResponseBodyResultContentResponse &&) = default ;
    GetModelResponseBodyResultContentResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelResponseBodyResultContentResponse() = default ;
    GetModelResponseBodyResultContentResponse& operator=(const GetModelResponseBodyResultContentResponse &) = default ;
    GetModelResponseBodyResultContentResponse& operator=(GetModelResponseBodyResultContentResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embeddings_ != nullptr; };
    // embeddings Field Functions 
    bool hasEmbeddings() const { return this->embeddings_ != nullptr;};
    void deleteEmbeddings() { this->embeddings_ = nullptr;};
    inline string embeddings() const { DARABONBA_PTR_GET_DEFAULT(embeddings_, "") };
    inline GetModelResponseBodyResultContentResponse& setEmbeddings(string embeddings) { DARABONBA_PTR_SET_VALUE(embeddings_, embeddings) };


  protected:
    std::shared_ptr<string> embeddings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

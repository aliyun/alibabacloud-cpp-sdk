// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENTRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListModelsResponseBodyResultContentResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBodyResultContentResponse& obj) { 
      DARABONBA_PTR_TO_JSON(embeddings, embeddings_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBodyResultContentResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(embeddings, embeddings_);
    };
    ListModelsResponseBodyResultContentResponse() = default ;
    ListModelsResponseBodyResultContentResponse(const ListModelsResponseBodyResultContentResponse &) = default ;
    ListModelsResponseBodyResultContentResponse(ListModelsResponseBodyResultContentResponse &&) = default ;
    ListModelsResponseBodyResultContentResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBodyResultContentResponse() = default ;
    ListModelsResponseBodyResultContentResponse& operator=(const ListModelsResponseBodyResultContentResponse &) = default ;
    ListModelsResponseBodyResultContentResponse& operator=(ListModelsResponseBodyResultContentResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embeddings_ != nullptr; };
    // embeddings Field Functions 
    bool hasEmbeddings() const { return this->embeddings_ != nullptr;};
    void deleteEmbeddings() { this->embeddings_ = nullptr;};
    inline string embeddings() const { DARABONBA_PTR_GET_DEFAULT(embeddings_, "") };
    inline ListModelsResponseBodyResultContentResponse& setEmbeddings(string embeddings) { DARABONBA_PTR_SET_VALUE(embeddings_, embeddings) };


  protected:
    std::shared_ptr<string> embeddings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

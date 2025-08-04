// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADBOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPLOADBOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UploadBookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadBookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(ExistedIds, existedIds_);
    };
    friend void from_json(const Darabonba::Json& j, UploadBookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(ExistedIds, existedIds_);
    };
    UploadBookResponseBodyData() = default ;
    UploadBookResponseBodyData(const UploadBookResponseBodyData &) = default ;
    UploadBookResponseBodyData(UploadBookResponseBodyData &&) = default ;
    UploadBookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadBookResponseBodyData() = default ;
    UploadBookResponseBodyData& operator=(const UploadBookResponseBodyData &) = default ;
    UploadBookResponseBodyData& operator=(UploadBookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docIds_ != nullptr
        && this->existedIds_ != nullptr; };
    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & docIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> docIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline UploadBookResponseBodyData& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline UploadBookResponseBodyData& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // existedIds Field Functions 
    bool hasExistedIds() const { return this->existedIds_ != nullptr;};
    void deleteExistedIds() { this->existedIds_ = nullptr;};
    inline const vector<string> & existedIds() const { DARABONBA_PTR_GET_CONST(existedIds_, vector<string>) };
    inline vector<string> existedIds() { DARABONBA_PTR_GET(existedIds_, vector<string>) };
    inline UploadBookResponseBodyData& setExistedIds(const vector<string> & existedIds) { DARABONBA_PTR_SET_VALUE(existedIds_, existedIds) };
    inline UploadBookResponseBodyData& setExistedIds(vector<string> && existedIds) { DARABONBA_PTR_SET_RVALUE(existedIds_, existedIds) };


  protected:
    std::shared_ptr<vector<string>> docIds_ = nullptr;
    std::shared_ptr<vector<string>> existedIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISCOREINDEXRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISCOREINDEXRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAnalysisCoreIndexResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListAnalysisCoreIndexResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisCoreIndexResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisCoreIndexResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAnalysisCoreIndexResponseBodyResultContent() = default ;
    ListAnalysisCoreIndexResponseBodyResultContent(const ListAnalysisCoreIndexResponseBodyResultContent &) = default ;
    ListAnalysisCoreIndexResponseBodyResultContent(ListAnalysisCoreIndexResponseBodyResultContent &&) = default ;
    ListAnalysisCoreIndexResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisCoreIndexResponseBodyResultContent() = default ;
    ListAnalysisCoreIndexResponseBodyResultContent& operator=(const ListAnalysisCoreIndexResponseBodyResultContent &) = default ;
    ListAnalysisCoreIndexResponseBodyResultContent& operator=(ListAnalysisCoreIndexResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::ListAnalysisCoreIndexResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::ListAnalysisCoreIndexResponseBodyResultContentData) };
    inline Models::ListAnalysisCoreIndexResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::ListAnalysisCoreIndexResponseBodyResultContentData) };
    inline ListAnalysisCoreIndexResponseBodyResultContent& setData(const Models::ListAnalysisCoreIndexResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAnalysisCoreIndexResponseBodyResultContent& setData(Models::ListAnalysisCoreIndexResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContent& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnalysisCoreIndexResponseBodyResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::ListAnalysisCoreIndexResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

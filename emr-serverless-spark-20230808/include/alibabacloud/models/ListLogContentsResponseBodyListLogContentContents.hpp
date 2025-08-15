// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODYLISTLOGCONTENTCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODYLISTLOGCONTENTCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLogContentsResponseBodyListLogContentContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogContentsResponseBodyListLogContentContents& obj) { 
      DARABONBA_PTR_TO_JSON(LineContent, lineContent_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogContentsResponseBodyListLogContentContents& obj) { 
      DARABONBA_PTR_FROM_JSON(LineContent, lineContent_);
    };
    ListLogContentsResponseBodyListLogContentContents() = default ;
    ListLogContentsResponseBodyListLogContentContents(const ListLogContentsResponseBodyListLogContentContents &) = default ;
    ListLogContentsResponseBodyListLogContentContents(ListLogContentsResponseBodyListLogContentContents &&) = default ;
    ListLogContentsResponseBodyListLogContentContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogContentsResponseBodyListLogContentContents() = default ;
    ListLogContentsResponseBodyListLogContentContents& operator=(const ListLogContentsResponseBodyListLogContentContents &) = default ;
    ListLogContentsResponseBodyListLogContentContents& operator=(ListLogContentsResponseBodyListLogContentContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineContent_ != nullptr; };
    // lineContent Field Functions 
    bool hasLineContent() const { return this->lineContent_ != nullptr;};
    void deleteLineContent() { this->lineContent_ = nullptr;};
    inline string lineContent() const { DARABONBA_PTR_GET_DEFAULT(lineContent_, "") };
    inline ListLogContentsResponseBodyListLogContentContents& setLineContent(string lineContent) { DARABONBA_PTR_SET_VALUE(lineContent_, lineContent) };


  protected:
    // Log line content.
    std::shared_ptr<string> lineContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif

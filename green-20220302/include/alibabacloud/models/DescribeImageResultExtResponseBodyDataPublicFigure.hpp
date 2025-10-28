// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATAPUBLICFIGURE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATAPUBLICFIGURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageResultExtResponseBodyDataPublicFigure : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageResultExtResponseBodyDataPublicFigure& obj) { 
      DARABONBA_PTR_TO_JSON(FigureId, figureId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageResultExtResponseBodyDataPublicFigure& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
    };
    DescribeImageResultExtResponseBodyDataPublicFigure() = default ;
    DescribeImageResultExtResponseBodyDataPublicFigure(const DescribeImageResultExtResponseBodyDataPublicFigure &) = default ;
    DescribeImageResultExtResponseBodyDataPublicFigure(DescribeImageResultExtResponseBodyDataPublicFigure &&) = default ;
    DescribeImageResultExtResponseBodyDataPublicFigure(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageResultExtResponseBodyDataPublicFigure() = default ;
    DescribeImageResultExtResponseBodyDataPublicFigure& operator=(const DescribeImageResultExtResponseBodyDataPublicFigure &) = default ;
    DescribeImageResultExtResponseBodyDataPublicFigure& operator=(DescribeImageResultExtResponseBodyDataPublicFigure &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->figureId_ == nullptr; };
    // figureId Field Functions 
    bool hasFigureId() const { return this->figureId_ != nullptr;};
    void deleteFigureId() { this->figureId_ = nullptr;};
    inline string figureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
    inline DescribeImageResultExtResponseBodyDataPublicFigure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


  protected:
    // Identified person coding information.
    std::shared_ptr<string> figureId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
